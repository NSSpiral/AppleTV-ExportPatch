/* Runtime dump - AVAudioChannelLayout
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioChannelLayout : NSObject
{
    unsigned long _layoutTag;
    struct AudioChannelLayout * _layout;
    void * _reserved;
}

@property (readonly, nonatomic) unsigned long layoutTag;
@property (readonly, nonatomic) struct AudioChannelLayout * layout;
@property (readonly, nonatomic) unsigned int channelCount;

+ (unsigned int)audioChannelLayoutSize:(NSObject *)arg0;
+ (NSString *)layoutWithLayoutTag:(unsigned long)arg0;
+ (NSObject *)layoutWithLayout:(struct AudioChannelLayout *)arg0;

- (unsigned int)channelCount;
- (AVAudioChannelLayout *)initWithLayout:(struct AudioChannelLayout *)arg0;
- (AVAudioChannelLayout *)initWithLayoutTag:(unsigned long)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (struct AudioChannelLayout *)layout;
- (unsigned long)layoutTag;

@end
