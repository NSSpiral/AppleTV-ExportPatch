/* Runtime dump - IKJSManagedArray
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSManagedArray : NSObject
{
    id _ownerObject;
    NSArray * _managedArray;
}

@property (retain, nonatomic) id ownerObject;
@property (retain, nonatomic) NSArray * managedArray;

- (void)dealloc;
- (void).cxx_destruct;
- (NSArray *)managedArray;
- (NSObject *)ownerObject;
- (void)setManagedArray:(NSArray *)arg0;
- (IKJSManagedArray *)initWithArray:(NSArray *)arg0 ownerObject:(NSObject *)arg1;
- (NSString *)jsValuesWithContext:(NSObject *)arg0;
- (void)setOwnerObject:(NSObject *)arg0;

@end
