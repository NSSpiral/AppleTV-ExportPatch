/* Runtime dump - TSKCOAbstractOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOAbstractOperation : NSObject <TSKCOOperation>
{
    char mNoop;
}

@property (readonly, nonatomic) char isNoop;

+ (TSKCOAbstractOperation *)_classRegistry;
+ (void)registerClass:(Class)arg0 forExtensionNumber:(int)arg1;
+ (TSKCOAbstractOperation *)newObjectForUnarchiver:(TSPUnknownObjectUnarchiver *)arg0 message:(struct Message *)arg1;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Operation *)arg1;
- (TSKCOAbstractOperation *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Operation *)arg1;
- (char)isNoop;
- (TSKCOAbstractOperation *)initWithNoop:(char)arg0;
- (void)dealloc;

@end
