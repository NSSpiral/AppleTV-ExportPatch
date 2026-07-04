/* Runtime dump - SBKSyncRequestData
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncRequestData : SBKRequestData

@property (readonly) SBKSyncTransaction * transaction;

- (NSObject *)syncTransaction;
- (NSString *)_serializableUpdateItemPayloadDictionaryForKey:(NSString *)arg0;
- (NSString *)_serializableDeleteItemPayloadDictionaryForKey:(NSString *)arg0;
- (id)_serializableConflictDetectionValue;
- (char)_needsConflictDetection;
- (NSString *)_serializableConflictDetectionOrdinalForKey:(NSString *)arg0;
- (NSArray *)serializableRequestBodyPropertyList;

@end
