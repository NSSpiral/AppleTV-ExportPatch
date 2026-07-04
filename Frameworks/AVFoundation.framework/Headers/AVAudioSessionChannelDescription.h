/* Runtime dump - AVAudioSessionChannelDescription
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioSessionChannelDescription : NSObject
{
    void * _impl;
}

@property (readonly) NSString * channelName;
@property (readonly) NSString * owningPortUID;
@property (readonly) unsigned int channelNumber;
@property (readonly) unsigned long channelLabel;

+ (AVAudioSessionChannelDescription *)privateCreate:(id)arg0 portUID:(id)arg1 channelNumber:(unsigned long)arg2;
+ (NSArray *)privateCreateArray:(NSArray *)arg0 portUID:(id)arg1;

- (NSString *)owningPortUID;
- (unsigned int)channelNumber;
- (struct ChannelDescriptionImpl *)privateGetImplementation;
- (char)isEqualToChannel:(NSObject *)arg0;
- (NSString *)channelName;
- (unsigned long)channelLabel;
- (void)dealloc;
- (AVAudioSessionChannelDescription *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;

@end
