/* Runtime dump - NSISVariable
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISVariable : NSObject
{
    <NSISVariableDelegate> * _delegate;
    int _refCount;
    unsigned int _ident;
}

@property <NSISVariableDelegate> * delegate;
@property (readonly) char shouldBeMinimized;
@property (readonly) int valueRestriction;

+ (NSString *)variableWithName:(NSString *)arg0 valueRestriction:(int)arg1 shouldBeMinimized:(char)arg2;
+ (NSObject *)variableMarkingConstraint:(NSObject *)arg0 valueRestriction:(int)arg1 shouldBeMinimized:(char)arg2;
+ (NSObject *)variableWithDelegate:(<NSISVariableDelegate> *)arg0 valueRestriction:(int)arg1 shouldBeMinimized:(char)arg2;

- (char)shouldBeIntegral;
- (int)valueRestriction;
- (NSObject *)markedConstraint;
- (char)markedConstraintIsEligibleForIntegralizationAdjustment;
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (char)valueIsUserVisible;
- (char)shouldBeMinimized;
- (NSISVariable *)retain;
- (void)release;
- (void)setDelegate:(<NSISVariableDelegate> *)arg0;
- (NSISVariable *)init;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSString *)description;
- (<NSISVariableDelegate> *)delegate;
- (char)_tryRetain;
- (char)_isDeallocating;

@end
