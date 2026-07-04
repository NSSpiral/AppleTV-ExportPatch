/* Runtime dump - CKObjCProperty
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKObjCProperty : NSObject
{
    Class _classHandle;
    CKObjCType * _type;
    NSString * _name;
    unsigned int _flags;
    SEL _getterSelector;
    NSString * _getterSelectorName;
    NSMethodSignature * _getterMethodSignature;
    SEL _setterSelector;
    NSString * _setterSelectorName;
    NSMethodSignature * _setterMethodSignature;
    NSString * _instanceVariableName;
}

@property (readonly, nonatomic) Class classHandle;
@property (readonly, nonatomic) CKObjCType * type;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) SEL getterSelector;
@property (readonly, nonatomic) NSString * getterSelectorName;
@property (readonly, nonatomic) NSMethodSignature * getterMethodSignature;
@property (readonly, nonatomic) SEL setterSelector;
@property (readonly, nonatomic) NSString * setterSelectorName;
@property (readonly, nonatomic) NSMethodSignature * setterMethodSignature;
@property (readonly, nonatomic) NSString * instanceVariableName;

- (NSObject *)getFromObject:(NSObject *)arg0;
- (CKObjCProperty *)initWithClass:(Class)arg0 property:(struct objc_property *)arg1;
- (int)compareToProperty:(NSObject *)arg0;
- (void)setValue:(NSObject *)arg0 onObject:(NSObject *)arg1;
- (Class)classHandle;
- (SEL)getterSelector;
- (NSString *)getterSelectorName;
- (NSMethodSignature *)getterMethodSignature;
- (SEL)setterSelector;
- (NSString *)setterSelectorName;
- (NSMethodSignature *)setterMethodSignature;
- (NSString *)instanceVariableName;
- (NSString *)name;
- (int)compare:(NSObject *)arg0;
- (CKObjCType *)type;
- (void).cxx_destruct;
- (unsigned int)flags;

@end
