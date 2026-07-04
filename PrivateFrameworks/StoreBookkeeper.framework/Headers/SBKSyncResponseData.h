/* Runtime dump - SBKSyncResponseData
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncResponseData : NSObject
{
    SBKSyncTransaction * _transaction;
    NSString * _syncAnchor;
    NSArray * _updatedKeys;
    NSArray * _conflictedKeys;
    NSArray * _deletedKeys;
    NSArray * _successfullyUpdatedKeys;
    NSArray * _successfullyDeletedKeys;
    NSMutableDictionary * _responseOpEntiesByKey;
}

@property (readonly) SBKSyncTransaction * transaction;
@property (readonly, copy) NSString * syncAnchor;
@property (readonly) NSArray * updatedKeys;
@property (readonly) NSArray * conflictedKeys;
@property (readonly) NSArray * deletedKeys;
@property (readonly) NSArray * successfullyUpdatedKeys;
@property (readonly) NSArray * successfullyDeletedKeys;
@property (retain) NSMutableDictionary * responseOpEntiesByKey;

+ (NSObject *)deserializedResponseBodyWithTransaction:(SBKSyncTransaction *)arg0 responseDictionary:(NSDictionary *)arg1 response:(NSURLResponse *)arg2;

- (NSString *)description;
- (void).cxx_destruct;
- (SBKSyncTransaction *)transaction;
- (NSString *)syncAnchor;
- (SBKSyncResponseData *)initWithTransaction:(SBKSyncTransaction *)arg0 responseDictionary:(NSDictionary *)arg1 response:(NSURLResponse *)arg2;
- (void)_deserializeResponseDictionary:(NSDictionary *)arg0 response:(NSURLResponse *)arg1;
- (NSString *)payloadDataForUpdateResponseKey:(NSString *)arg0;
- (NSArray *)updatedKeys;
- (NSArray *)conflictedKeys;
- (NSArray *)deletedKeys;
- (NSArray *)successfullyUpdatedKeys;
- (NSArray *)successfullyDeletedKeys;
- (NSMutableDictionary *)responseOpEntiesByKey;
- (void)setResponseOpEntiesByKey:(NSMutableDictionary *)arg0;

@end
