/* Runtime dump - AVAudioSessionPortDescription
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioSessionPortDescription : NSObject
{
    void * _impl;
}

@property (readonly) NSString * portType;
@property (readonly) NSString * portName;
@property (readonly) NSString * UID;
@property (readonly) NSArray * channels;
@property (readonly) NSArray * dataSources;
@property (readonly) AVAudioSessionDataSourceDescription * selectedDataSource;
@property (readonly) AVAudioSessionDataSourceDescription * preferredDataSource;

+ (char)privateMatchesInputs:(id)arg0 toRawInputs:(id)arg1;
+ (NSArray *)privateCreateOrConfigureArray:(NSArray *)arg0 withRawPortArray:(NSArray *)arg1;

- (char)setPreferredDataSource:(AVAudioSessionDataSourceDescription *)arg0 error:(id *)arg1;
- (NSArray *)dataSources;
- (AVAudioSessionDataSourceDescription *)selectedDataSource;
- (NSObject *)privateGetID;
- (struct PortDescriptionImpl *)privateGetImplementation;
- (NSString *)portType;
- (char)isEqualToPort:(NSObject *)arg0 compareStrict:(char)arg1;
- (NSString *)UID;
- (char)privateMatchesRawDescription:(NSString *)arg0;
- (void)configureChannelsAndDataSources:(id)arg0;
- (AVAudioSessionPortDescription *)initWithRawPortDescription:(NSString *)arg0;
- (char)isHeadphones;
- (AVAudioSessionDataSourceDescription *)preferredDataSource;
- (NSArray *)channels;
- (void)dealloc;
- (AVAudioSessionPortDescription *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)portName;

@end
