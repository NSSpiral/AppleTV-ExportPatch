/* Runtime dump - DDURLMatch
 * Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDURLMatch : NSObject
{
    struct _NSRange _range;
    NSString * _url;
}

- (void)dealloc;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (NSString *)url;
- (struct _NSRange)range;
- (DDURLMatch *)initWithRange:(struct _NSRange)arg0 url:(NSString *)arg1;

@end
