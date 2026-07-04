/* Runtime dump - MSEmailModel
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSEmailModel : NSObject <NSCoding>
{
    NSString * _subject;
    NSString * _body;
    NSArray * _to;
    NSArray * _cc;
    NSArray * _bcc;
    NSURL * _reference;
    int _type;
}

@property (copy, nonatomic) NSString * subject;
@property (copy, nonatomic) NSArray * to;
@property (copy, nonatomic) NSArray * cc;
@property (copy, nonatomic) NSArray * bcc;
@property (retain, nonatomic) NSString * body;
@property (retain, nonatomic) NSURL * reference;
@property (nonatomic) int type;

- (void)dealloc;
- (MSEmailModel *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)body;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (void)setBody:(NSString *)arg0;
- (void)setTo:(NSArray *)arg0;
- (NSArray *)to;
- (void)setBcc:(NSArray *)arg0;
- (NSArray *)bcc;
- (NSArray *)cc;
- (void)setCc:(NSArray *)arg0;
- (void)setReference:(NSURL *)arg0;
- (NSURL *)reference;

@end
