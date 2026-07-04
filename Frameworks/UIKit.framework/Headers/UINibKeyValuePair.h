/* Runtime dump - UINibKeyValuePair
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibKeyValuePair : NSObject
{
    id object;
    NSString * keyPath;
    id value;
}

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) NSString * keyPath;
@property (readonly, nonatomic) id value;

- (void)dealloc;
- (UINibKeyValuePair *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void *)value;
- (NSString *)keyPath;
- (NSObject *)object;
- (void)applyForSimulator;
- (void)apply;
- (UINibKeyValuePair *)initWithObject:(NSObject *)arg0 keyPath:(NSString *)arg1 value:(NSObject *)arg2;

@end
