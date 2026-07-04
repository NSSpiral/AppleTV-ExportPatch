/* Runtime dump - SAUIImageResource
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIImageResource : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSData * imageData;
@property (nonatomic) double pixelHeight;
@property (nonatomic) double pixelWidth;
@property (nonatomic) double pointHeight;
@property (nonatomic) double pointWidth;
@property (copy, nonatomic) NSURL * resourceUrl;
@property (nonatomic) double scaleFactor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAUIImageResource *)imageResource;
+ (NSDictionary *)imageResourceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setScaleFactor:(double)arg0;
- (NSString *)groupIdentifier;
- (double)scaleFactor;
- (NSData *)imageData;
- (void)setImageData:(NSData *)arg0;
- (void)setPointHeight:(double)arg0;
- (double)pixelWidth;
- (double)pixelHeight;
- (NSString *)encodedClassName;
- (void)setPixelHeight:(double)arg0;
- (void)setPixelWidth:(double)arg0;
- (double)pointHeight;
- (double)pointWidth;
- (void)setPointWidth:(double)arg0;
- (NSURL *)resourceUrl;
- (void)setResourceUrl:(NSURL *)arg0;

@end
