/* Runtime dump - ICSAttachment
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSAttachment : ICSProperty

@property (retain, nonatomic) NSString * fmtype;
@property (retain, nonatomic) NSString * managed_id;
@property (retain, nonatomic) NSString * managed_filename;
@property (nonatomic) int size;
@property (nonatomic) char x_apple_autoarchived;
@property (retain, nonatomic) NSString * x_apple_filename;
@property (retain, nonatomic) NSString * x_apple_ews_attachmentid;

- (char)isBinary;
- (NSString *)fmtype;
- (void)setFmtype:(NSString *)arg0;
- (void)setX_apple_filename:(NSString *)arg0;
- (int)size;
- (void)setData:(NSData *)arg0;
- (ICSAttachment *)initWithData:(NSData *)arg0;
- (void)setSize:(int)arg0;
- (ICSAttachment *)initWithURL:(NSString *)arg0;
- (void)setURL:(NSString *)arg0;
- (NSString *)filename;
- (char)shouldObscureValue;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (NSString *)managed_filename;
- (NSString *)x_apple_filename;
- (NSString *)managed_id;
- (void)setManaged_id:(NSString *)arg0;
- (char)x_apple_autoarchived;
- (void)setX_apple_autoarchived:(char)arg0;
- (void)setManaged_filename:(NSString *)arg0;
- (NSString *)x_apple_ews_attachmentid;
- (void)setX_apple_ews_attachmentid:(NSString *)arg0;

@end
