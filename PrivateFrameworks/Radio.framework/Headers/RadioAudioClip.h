/* Runtime dump - RadioAudioClip
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioAudioClip : RadioTrack

@property (readonly, copy, nonatomic) NSURL * assetURL;
@property (readonly, nonatomic) long long purchaseID;
@property (readonly, nonatomic) char skipable;

- (NSURL *)assetURL;
- (long long)purchaseID;
- (char)isSkipable;

@end
