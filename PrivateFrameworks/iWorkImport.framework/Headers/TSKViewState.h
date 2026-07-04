/* Runtime dump - TSKViewState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKViewState : TSPObject
{
    TSPObject * _viewStateRoot;
}

@property (retain, nonatomic) TSPObject * viewStateRoot;

+ (NSObject *)viewStateWithRoot:(NSObject *)arg0 context:(NSObject *)arg1;

- (NSString *)packageLocator;
- (TSKViewState *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)setViewStateRoot:(TSPObject *)arg0;
- (TSKViewState *)initWithViewStateRoot:(TSPObject *)arg0 context:(NSObject *)arg1;
- (TSPObject *)viewStateRoot;
- (void)dealloc;

@end
