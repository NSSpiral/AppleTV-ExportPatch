/* Runtime dump - MPContentTastePendingUpdateRecord
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentTastePendingUpdateRecord : NSObject
{
    NSString * _playlistGlobalID;
    unsigned int _tasteType;
    int _type;
    NSUUID * _UUID;
    long long _storeAdamID;
}

@property (readonly, nonatomic) NSString * playlistGlobalID;
@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, nonatomic) unsigned int tasteType;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSUUID * UUID;

- (long long)storeAdamID;
- (MPContentTastePendingUpdateRecord *)initWithPlaylistGlobalID:(NSString *)arg0 tasteType:(unsigned int)arg1;
- (MPContentTastePendingUpdateRecord *)initWithStoreAdamID:(long long)arg0 tasteType:(unsigned int)arg1;
- (unsigned int)tasteType;
- (void)_initializeWithType:(int)arg0 tasteType:(unsigned int)arg1;
- (NSString *)playlistGlobalID;
- (int)type;
- (NSUUID *)UUID;
- (void).cxx_destruct;

@end
