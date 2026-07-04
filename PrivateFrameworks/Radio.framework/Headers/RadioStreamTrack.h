/* Runtime dump - RadioStreamTrack
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStreamTrack : RadioTrack

@property (readonly, retain, nonatomic) NSURL * certificateURL;
@property (readonly, retain, nonatomic) NSURL * contentURL;
@property (readonly, retain, nonatomic) NSURL * keyServerURL;
@property (readonly, nonatomic) char skipable;

- (NSURL *)contentURL;
- (char)isSkipable;
- (NSURL *)certificateURL;
- (NSURL *)keyServerURL;

@end
