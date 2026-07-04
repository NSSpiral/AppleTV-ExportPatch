/* Runtime dump - GKABRecord
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKABRecord : GKABObject

@property (readonly) NSString * uniqueID;
@property (readonly) void * ABRecord;
@property (readonly) int recordID;

- (int)recordID;
- (void *)ABRecord;
- (GKABRecord *)initWithABRecord:(void *)arg0;
- (NSObject *)propertyForID:(int)arg0;
- (NSString *)uniqueID;

@end
