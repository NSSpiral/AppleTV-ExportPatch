/* Runtime dump - ML3DatabaseValidationClient
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseValidationClient : NSObject
{
    NSMutableDictionary * _validatableDatabases;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (ML3DatabaseValidationClient *)sharedClient;

- (ML3DatabaseValidationClient *)init;
- (void).cxx_destruct;
- (char)validateDatabaseForLibrary:(NSObject *)arg0;
- (char)_validateDatabaseForPath:(NSString *)arg0 usingLibrary:(NSObject *)arg1;
- (NSString *)_validatableDatabaseForPath:(NSString *)arg0;
- (char)validateDatabaseAtPath:(NSString *)arg0;
- (char)validateDatabaseForConnection:(NSURLConnection *)arg0;
- (char)isValidatingDatabaseForPath:(NSString *)arg0;

@end
