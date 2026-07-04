/* Runtime dump - TSAServerApplicationDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAServerApplicationDelegate : NSObject
{
    TSABaseApplicationDelegate * _baseApplicationDelegate;
}

@property (retain, nonatomic) TSABaseApplicationDelegate * baseApplicationDelegate;

+ (TSAServerApplicationDelegate *)sharedDelegate;

- (void)setBaseApplicationDelegate:(TSABaseApplicationDelegate *)arg0;
- (TSAServerApplicationDelegate *)initWithBaseApplicationDelegate:(TSABaseApplicationDelegate *)arg0;
- (TSABaseApplicationDelegate *)baseApplicationDelegate;
- (TSAServerApplicationDelegate *)init;

@end
