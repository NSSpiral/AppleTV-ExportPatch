/* Runtime dump - AVAudioSessionRouteDescription
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioSessionRouteDescription : NSObject
{
    void * _impl;
}

@property (readonly) NSArray * inputs;
@property (readonly) NSArray * outputs;

+ (AVAudioSessionRouteDescription *)privateCreateOrConfigure:(id)arg0 withRawDescription:(char)arg1;

- (NSArray *)outputs;
- (NSArray *)inputs;
- (struct RouteDescriptionImpl *)privateGetImplementation;
- (char)isEqualToRoute:(id)arg0;
- (char)matchesRawDescription:(NSString *)arg0;
- (void)dealloc;
- (AVAudioSessionRouteDescription *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;

@end
