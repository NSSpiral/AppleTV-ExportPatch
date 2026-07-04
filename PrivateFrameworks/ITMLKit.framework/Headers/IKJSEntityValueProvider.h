/* Runtime dump - IKJSEntityValueProvider
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider>
{
    <IKEntityValueProviding> * _entityValueProvider;
}

@property (retain, nonatomic) <IKEntityValueProviding> * entityValueProvider;

- (void).cxx_destruct;
- (NSObject *)_valueForEntityProperty:(NSObject *)arg0;
- (NSDictionary *)valuesForEntityProperties:(NSDictionary *)arg0;
- (<IKEntityValueProviding> *)entityValueProvider;
- (void)setEntityValueProvider:(<IKEntityValueProviding> *)arg0;
- (NSObject *)valueForEntityProperty:(NSObject *)arg0;

@end
