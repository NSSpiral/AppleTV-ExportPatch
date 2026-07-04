/* Runtime dump - PSSpecifierUpdateOperation
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierUpdateOperation : NSObject <NSCopying>
{
    int _operation;
    PSSpecifier * _specifier;
    NSNumber * _index;
    NSNumber * _toIndex;
}

@property (readonly, nonatomic) int operation;
@property (retain, nonatomic) PSSpecifier * specifier;
@property (retain, nonatomic) NSNumber * index;
@property (retain, nonatomic) NSNumber * toIndex;

+ (PSSpecifierUpdateOperation *)insertOperationWithSpecifier:(PSSpecifier *)arg0 atIndex:(unsigned int)arg1;
+ (PSSpecifierUpdateOperation *)removeOperationWithSpecifier:(PSSpecifier *)arg0 atIndex:(unsigned int)arg1;
+ (PSSpecifierUpdateOperation *)reloadOperationWithSpecifier:(PSSpecifier *)arg0 atIndex:(unsigned int)arg1;
+ (PSSpecifierUpdateOperation *)moveOperationWithSpecifier:(PSSpecifier *)arg0 fromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;

- (PSSpecifier *)specifier;
- (void)setSpecifier:(PSSpecifier *)arg0;
- (void)dealloc;
- (NSString *)description;
- (int)operation;
- (PSSpecifierUpdateOperation *)copyWithZone:(struct _NSZone *)arg0;
- (NSNumber *)index;
- (char)applyToArray:(NSArray *)arg0;
- (void)setIndex:(NSNumber *)arg0;
- (NSNumber *)toIndex;
- (PSSpecifierUpdateOperation *)initWithOperation:(int)arg0 specifier:(PSSpecifier *)arg1 index:(NSNumber *)arg2;
- (PSSpecifierUpdateOperation *)initWithOperation:(int)arg0 specifier:(PSSpecifier *)arg1 fromIndex:(int)arg2 toIndex:(NSNumber *)arg3;
- (void)setToIndex:(NSNumber *)arg0;

@end
