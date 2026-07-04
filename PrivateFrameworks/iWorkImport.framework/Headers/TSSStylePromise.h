/* Runtime dump - TSSStylePromise
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSStylePromise : NSObject <TSSStyleObject>
{
    TSSStyle * _sourceStyle;
    NSMutableArray * _promisees;
}

+ (NSObject *)promiseForStyle:(NSObject *)arg0;

- (void)addPromisee:(id)arg0;
- (void)fulfillWithStyle:(NSObject *)arg0;
- (void)dealloc;
- (TSSStylePromise *)initWithStyle:(NSObject *)arg0;

@end
