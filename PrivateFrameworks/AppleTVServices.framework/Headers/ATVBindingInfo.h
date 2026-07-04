/* Runtime dump - ATVBindingInfo
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBindingInfo : NSObject
{
    id _observedObject;
    NSString * _observedKeyPath;
    NSDictionary * _bindingOptions;
    id _updateHandler;
}

@property (readonly, nonatomic) id observedObject;
@property (readonly, copy, nonatomic) NSString * observedKeyPath;
@property (readonly, copy, nonatomic) NSDictionary * bindingOptions;
@property (readonly, copy, nonatomic) id updateHandler;

- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)observedObject;
- (NSString *)observedKeyPath;
- (ATVBindingInfo *)initWithObservedObject:(NSObject *)arg0 observedKeyPath:(NSString *)arg1 bindingOptions:(NSDictionary *)arg2 updateHandler:(id /* block */)arg3;
- (NSDictionary *)bindingOptions;
- (id /* block */)updateHandler;

@end
