/* Runtime dump - UIStoryboardSegue
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardSegue : NSObject
{
    NSString * _identifier;
    id _sourceViewController;
    id _destinationViewController;
    id _performHandler;
    id _sender;
}

@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) id sourceViewController;
@property (readonly, nonatomic) id destinationViewController;
@property (copy, nonatomic) id performHandler;
@property (retain, nonatomic) id sender;

+ (NSString *)segueWithIdentifier:(NSString *)arg0 source:(NSObject *)arg1 destination:(NSObject *)arg2 performHandler:(id /* block */)arg3;

- (void)dealloc;
- (NSString *)identifier;
- (void)_prepare;
- (NSObject *)destinationViewController;
- (NSObject *)sourceViewController;
- (void)perform;
- (<NSURLAuthenticationChallengeSender> *)sender;
- (UIStoryboardSegue *)initWithIdentifier:(NSString *)arg0 source:(NSObject *)arg1 destination:(NSObject *)arg2;
- (void)setSender:(NSObject *)arg0;
- (void)setPerformHandler:(id /* block */)arg0;
- (id /* block */)performHandler;

@end
