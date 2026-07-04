/* Runtime dump - TSPDatabaseObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseObject : NSObject
{
    int _classType;
    long long _identifier;
}

@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) int classType;
@property (readonly, nonatomic) char hasDataState;
@property (readonly, nonatomic) long long dataState;
@property (readonly, nonatomic) char hasFileState;
@property (readonly, nonatomic) NSString * fileState;
@property (readonly, nonatomic) NSURL * fileURL;

+ (NSString *)databaseObjectWithIdentifier:(long long)arg0 classType:(int)arg1 dataState:(long long)arg2;
+ (NSString *)databaseObjectWithIdentifier:(long long)arg0 classType:(int)arg1 fileState:(NSString *)arg2 packageURL:(NSURL *)arg3;

- (char)hasDataState;
- (long long)dataState;
- (TSPDatabaseObject *)initWithIdentifier:(long long)arg0 classType:(int)arg1;
- (char)hasFileState;
- (NSString *)fileState;
- (int)classType;
- (TSPDatabaseObject *)init;
- (long long)identifier;
- (NSURL *)fileURL;

@end
