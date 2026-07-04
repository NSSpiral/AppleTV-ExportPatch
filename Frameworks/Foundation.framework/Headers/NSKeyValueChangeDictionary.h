/* Runtime dump - NSKeyValueChangeDictionary
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueChangeDictionary : NSDictionary
{
    struct ? _details;
    NSObject * _originalObservable;
    char _isPriorNotification;
    char _isRetainingObjects;
}

- (void)setOriginalObservable:(NSObject *)arg0;
- (void)setDetailsNoCopy:(struct ?)arg0 originalObservable:(NSObject *)arg1;
- (NSKeyValueChangeDictionary *)initWithDetailsNoCopy:(struct ?)arg0 originalObservable:(NSObject *)arg1 isPriorNotification:(char)arg2;
- (void)retainObjects;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSEnumerator *)keyEnumerator;

@end
