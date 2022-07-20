#include <stdio.h>
#include <mongoc/mongoc.h>

using namespace std;

int main(){
    printf("This is in C.");
    
    mongoc_database_t *database;
    mongoc_client_t *client;
    mongoc_init ();
    
    client = mongoc_client_new(
      "mongodb+srv://geno:mongohongo123@cluster0.ov5zr.mongodb.net/test?retryWrites=true&w=majority"
    );
    database = mongoc_client_get_database (client, "test");
    mongoc_database_destroy (database);
    mongoc_client_destroy (client);
    mongoc_cleanup ();
   return 0;
}