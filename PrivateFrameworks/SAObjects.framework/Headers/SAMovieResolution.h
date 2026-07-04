/* Runtime dump - SAMovieResolution
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieResolution : AceObject <SAAceSerializable>

@property (nonatomic) int height;
@property (nonatomic) int width;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGSize)resolution;
+ (NSDictionary *)resolutionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)width;
- (int)height;
- (void)setWidth:(int)arg0;
- (void)setHeight:(int)arg0;
- (NSString *)encodedClassName;

@end
