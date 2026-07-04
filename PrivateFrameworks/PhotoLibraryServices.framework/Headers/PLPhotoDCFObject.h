/* Runtime dump - PLPhotoDCFObject
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDCFObject : NSObject
{
    NSString * _name;
    int _number;
}

+ (NSString *)validDCFNameForName:(NSString *)arg0 requiredLength:(int)arg1 nameLength:(int)arg2 number:(int *)arg3 numberRange:(struct _NSRange)arg4 suffix:(NSString *)arg5;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (int)compare:(NSObject *)arg0;
- (PLPhotoDCFObject *)initWithName:(NSString *)arg0 number:(int)arg1;
- (int)number;
- (void)setWriteIsPending:(char)arg0;

@end
