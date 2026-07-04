/* Runtime dump - FactoryServiceConnectionHelper
 * Image: /System/Library/PrivateFrameworks/FactoryServicesConnectionMobile.framework/FactoryServicesConnectionMobile
 */

@interface FactoryServiceConnectionHelper : NSObject
{
    NSDictionary * _activeServiceConnectionList;
}

@property (retain) NSDictionary * activeServiceConnectionList;

+ (FactoryServiceConnectionHelper *)createErrorDictionaryWithErrorCode:(int)arg0 andErrMsg:(id)arg1;

- (void).cxx_destruct;
- (NSDictionary *)activeServiceConnectionList;
- (void)setActiveServiceConnectionList:(NSDictionary *)arg0;

@end
