/* Runtime dump - ATVObjectKeyPathPair
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVObjectKeyPathPair : NSObject
{
    NSObject * _observedObject;
    NSString * _keyPath;
}

@property (readonly, nonatomic) NSObject * observedObject;
@property (readonly, copy, nonatomic) NSString * keyPath;

+ (NSObject *)pairWithObject:(NSObject *)arg0 keyPath:(NSString *)arg1;

- (NSString *)keyPath;
- (ATVObjectKeyPathPair *)initWithObject:(NSObject *)arg0 keyPath:(NSString *)arg1;
- (void).cxx_destruct;
- (NSObject *)observedObject;

@end
