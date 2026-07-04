/* Runtime dump - AVAudioSessionDataSourceDescription
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioSessionDataSourceDescription : NSObject
{
    void * _impl;
}

@property (readonly) NSNumber * dataSourceID;
@property (readonly) NSString * dataSourceName;
@property (readonly) NSString * location;
@property (readonly) NSString * orientation;
@property (readonly) NSArray * supportedPolarPatterns;
@property (readonly) NSString * selectedPolarPattern;
@property (readonly) NSString * preferredPolarPattern;

+ (NSArray *)privateCreateOrConfigureArray:(NSArray *)arg0 withRawSourceArray:(NSArray *)arg1 portID:(NSObject *)arg2;

- (struct DataSourceDescriptionImpl *)privateGetImplementation;
- (NSNumber *)dataSourceID;
- (NSString *)dataSourceName;
- (char)privateMatchesRawDescription:(NSString *)arg0;
- (char)isEqualToDataSource:(NSObject *)arg0;
- (NSObject *)privateGetOwningPortID;
- (NSString *)selectedPolarPattern;
- (void)configurePolarPatterns:(id)arg0;
- (AVAudioSessionDataSourceDescription *)initWithRawSourceDescription:(NSString *)arg0 andOwningPortID:(NSObject *)arg1;
- (NSString *)preferredPolarPattern;
- (NSArray *)supportedPolarPatterns;
- (char)setPreferredPolarPattern:(NSString *)arg0 error:(id *)arg1;
- (void)dealloc;
- (AVAudioSessionDataSourceDescription *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)orientation;
- (NSString *)location;

@end
