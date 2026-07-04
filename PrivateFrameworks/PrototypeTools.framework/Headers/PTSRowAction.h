/* Runtime dump - PTSRowAction
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSRowAction : NSObject <NSCopying>
{
    char _deselectRowOnSuccess;
    id _handler;
}

@property (copy, nonatomic) id handler;
@property (nonatomic) char deselectRowOnSuccess;

+ (NSURL *)action;
+ (PTSRowAction *)actionWithHandler:(id /* block */)arg0;

- (PTSRowAction *)init;
- (PTSRowAction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void).cxx_destruct;
- (void)resolveTemplatesWithIndex:(unsigned int)arg0;
- (char)deselectRowOnSuccess;
- (void)setDeselectRowOnSuccess:(char)arg0;

@end
