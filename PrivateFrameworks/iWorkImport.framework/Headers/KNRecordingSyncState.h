/* Runtime dump - KNRecordingSyncState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingSyncState : NSObject <NSCopying>
{
    NSUUID * _outOfSyncToken;
    char _canClearOutOfSyncToken;
}

@property (readonly, nonatomic) NSUUID * outOfSyncToken;
@property (readonly, nonatomic) char recordingOutOfSync;

- (KNRecordingSyncState *)initWithOutOfSyncToken:(NSUUID *)arg0 canClearOutOfSyncToken:(char)arg1;
- (char)isRecordingOutOfSync;
- (char)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(NSString *)arg0;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(char)arg0 withLocalOutOfSyncToken:(NSString *)arg1;
- (NSUUID *)outOfSyncToken;
- (void)dealloc;
- (KNRecordingSyncState *)init;
- (NSString *)description;
- (KNRecordingSyncState *)copyWithZone:(struct _NSZone *)arg0;

@end
