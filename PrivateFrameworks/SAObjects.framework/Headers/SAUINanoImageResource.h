/* Runtime dump - SAUINanoImageResource
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUINanoImageResource : SAUIImageResource

@property (nonatomic) char backgroundNeeded;
@property (copy, nonatomic) NSString * imageDownloadType;
@property (retain, nonatomic) SAUIDecoratedText * monogram;
@property (copy, nonatomic) NSString * placeholderImage;

+ (NSObject *)nanoImageResource;
+ (NSDictionary *)nanoImageResourceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setMonogram:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)monogram;
- (void)setPlaceholderImage:(NSString *)arg0;
- (NSString *)placeholderImage;
- (NSString *)encodedClassName;
- (char)backgroundNeeded;
- (void)setBackgroundNeeded:(char)arg0;
- (NSString *)imageDownloadType;
- (void)setImageDownloadType:(NSString *)arg0;

@end
