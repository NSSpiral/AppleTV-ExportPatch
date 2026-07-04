/* Runtime dump - MFMailToURLComponents
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailToURLComponents : NSObject
{
    NSArray * _toRecipients;
    NSArray * _ccRecipients;
    NSArray * _bccRecipients;
    NSString * _subject;
    NSString * _body;
}

@property (readonly, nonatomic) NSArray * toRecipients;
@property (readonly, nonatomic) NSArray * ccRecipients;
@property (readonly, nonatomic) NSArray * bccRecipients;
@property (readonly, nonatomic) NSString * subject;
@property (readonly, nonatomic) NSString * body;

+ (NSURL *)componentsWithURL:(NSString *)arg0;

- (NSArray *)toRecipients;
- (NSArray *)ccRecipients;
- (NSArray *)bccRecipients;
- (void)_decomposeURL:(NSURL *)arg0;
- (void)dealloc;
- (MFMailToURLComponents *)init;
- (MFMailToURLComponents *)initWithURL:(NSString *)arg0;
- (NSString *)body;
- (NSString *)subject;

@end
