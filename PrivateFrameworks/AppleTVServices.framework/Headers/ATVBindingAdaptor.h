/* Runtime dump - ATVBindingAdaptor
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBindingAdaptor : NSObject
{
    id _owner;
    NSMutableDictionary * _bindingInfo;
    NSString * _ignoredBinding;
}

+ (NSDictionary *)atvValueTransformerFromOptions:(NSDictionary *)arg0;

- (NSObject *)_owner;
- (ATVBindingAdaptor *)initWithOwner:(ATVFeedDocument *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)establishBinding:(id)arg0 toObject:(NSObject *)arg1 withKeyPath:(NSString *)arg2 bindingOptions:(NSDictionary *)arg3 updateHandler:(id /* block */)arg4;
- (id)valueForBinding:(id)arg0;
- (void)unbind:(id)arg0;
- (void)unbindAll;
- (char)isBindingBound:(id)arg0;
- (id)bindingAdaptorInfoForBinding:(id)arg0;
- (id)optionsForBinding:(id)arg0;
- (void)setValue:(NSObject *)arg0 forBinding:(id)arg1;
- (char)validateValue:(id *)arg0 forBinding:(id)arg1 error:(id *)arg2;

@end
