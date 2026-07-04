/* Runtime dump - ATVStoreEnvironment
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStoreEnvironment : NSObject
{
    NSString * _environment;
    NSString * _build;
    NSString * _branch;
    NSString * _stringData;
}

@property (readonly) char isProduction;
@property (retain) NSString * environment;
@property (retain) NSString * build;
@property (retain) NSString * branch;
@property (retain) NSString * stringData;

- (NSString *)build;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)environment;
- (void).cxx_destruct;
- (void)setBranch:(NSString *)arg0;
- (void)setStringData:(NSString *)arg0;
- (ATVStoreEnvironment *)initWithEnvironmentDictionary:(NSString *)arg0;
- (NSString *)branch;
- (NSString *)stringData;
- (ATVStoreEnvironment *)initWithStorePage:(id)arg0;
- (char)isProduction;
- (void)setEnvironment:(NSString *)arg0;
- (void)setBuild:(NSString *)arg0;

@end
