/* Runtime dump - SAMovieImage
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieImage : AceObject <SAAceSerializable>

@property (retain, nonatomic) SAMovieResolution * resolution;
@property (copy, nonatomic) NSURL * uri;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIImage *)image;
+ (NSDictionary *)imageWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setResolution:(SAMovieResolution *)arg0;
- (SAMovieResolution *)resolution;
- (NSURL *)uri;
- (NSString *)encodedClassName;
- (void)setUri:(NSURL *)arg0;

@end
