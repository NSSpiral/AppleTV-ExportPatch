/* Runtime dump - CTMessagePart
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessagePart : NSObject
{
    NSString * _contentType;
    NSMutableDictionary * _contentTypeParams;
    NSString * _contentId;
    NSString * _contentLocation;
    NSData * _data;
}

@property (copy, nonatomic) NSString * contentType;
@property (copy, nonatomic) NSString * contentId;
@property (copy, nonatomic) NSString * contentLocation;
@property (copy, nonatomic) NSData * data;

- (CTMessagePart *)initWithData:(NSData *)arg0 contentType:(NSString *)arg1;
- (NSString *)contentTypeParameterWithName:(NSString *)arg0;
- (void)addContentTypeParameterWithName:(NSString *)arg0 value:(NSObject *)arg1;
- (NSArray *)allContentTypeParameterNames;
- (void)dealloc;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)setContentId:(NSString *)arg0;
- (void)setContentLocation:(NSString *)arg0;
- (NSString *)contentId;
- (NSString *)contentLocation;
- (void)setContentType:(NSString *)arg0;
- (NSString *)contentType;

@end
