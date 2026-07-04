/* Runtime dump - MFOfflineCacheReplayContext
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineCacheReplayContext : NSObject
{
    NSString * _selectedMailboxID;
    NSMutableDictionary * _translatedIDsByTemporaryID;
    NSMutableDictionary * _failureSnapshotsByTemporaryID;
}

@property (copy, nonatomic) NSString * selectedMailboxID;
@property (readonly, nonatomic) NSMutableDictionary * translatedIDsByTemporaryID;
@property (readonly, nonatomic) NSMutableDictionary * failureSnapshotsByTemporaryID;

- (void)dealloc;
- (MFOfflineCacheReplayContext *)init;
- (NSString *)selectedMailboxID;
- (void)setSelectedMailboxID:(NSString *)arg0;
- (NSMutableDictionary *)translatedIDsByTemporaryID;
- (NSMutableDictionary *)failureSnapshotsByTemporaryID;

@end
