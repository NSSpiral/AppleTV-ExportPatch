/* Runtime dump - FigCaptureSessionConfiguration
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSMutableArray * _connections;
    long long _configurationID;
    char _usesAppAudioSession;
    char _configuresAppAudioSession;
}

@property (nonatomic) long long configurationID;
@property (readonly, nonatomic) NSArray * connectionConfigurations;
@property (readonly, nonatomic) NSArray * sourceConfigurations;
@property (readonly, nonatomic) NSArray * sinkConfigurations;
@property (nonatomic) char usesAppAudioSession;
@property (nonatomic) char configuresAppAudioSession;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (long long)configurationID;
- (void)setConfigurationID:(long long)arg0;
- (void)setUsesAppAudioSession:(char)arg0;
- (void)setConfiguresAppAudioSession:(char)arg0;
- (void)addConnectionConfiguration:(NSDictionary *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (FigCaptureSessionConfiguration *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (FigCaptureSessionConfiguration *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (FigCaptureSessionConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)connectionConfigurations;
- (char)usesAppAudioSession;
- (char)configuresAppAudioSession;
- (void)removeConnectionConfiguration:(NSDictionary *)arg0;
- (NSArray *)sourceConfigurations;
- (NSArray *)sinkConfigurations;

@end
