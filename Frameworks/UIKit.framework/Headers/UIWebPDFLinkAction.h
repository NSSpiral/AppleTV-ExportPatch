/* Runtime dump - UIWebPDFLinkAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPDFLinkAction : NSObject
{
    NSString * title;
    int type;
    id handler;
}

@property (copy, nonatomic) NSString * title;
@property (nonatomic) int type;
@property (copy, nonatomic) id handler;

- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)title;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;

@end
