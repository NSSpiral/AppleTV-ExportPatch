/* Runtime dump - MCWebClipPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCWebClipPayload : MCPayload
{
    NSURL * _URL;
    NSString * _label;
    NSData * _iconData;
    char _isRemovable;
    char _precomposed;
    char _fullScreen;
    NSString * _savedIdentifier;
    NSNumber * _isRemovableNum;
    NSNumber * _precomposedNum;
    NSNumber * _fullScreenNum;
}

@property (readonly, retain, nonatomic) NSURL * URL;
@property (readonly, retain, nonatomic) NSString * label;
@property (readonly, retain, nonatomic) NSData * iconData;
@property (readonly, nonatomic) char isRemovable;
@property (readonly, nonatomic) char precomposed;
@property (readonly, nonatomic) char fullScreen;
@property (retain, nonatomic) NSString * savedIdentifier;
@property (readonly, nonatomic) NSNumber * isRemovableNum;
@property (readonly, nonatomic) NSNumber * precomposedNum;
@property (readonly, nonatomic) NSNumber * fullScreenNum;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (NSString *)label;
- (NSURL *)URL;
- (NSString *)subtitle2Label;
- (char)fullScreen;
- (void).cxx_destruct;
- (MCWebClipPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSString *)subtitle2Description;
- (char)isRemovable;
- (NSString *)savedIdentifier;
- (NSData *)iconData;
- (char)precomposed;
- (void)setSavedIdentifier:(NSString *)arg0;
- (NSNumber *)isRemovableNum;
- (NSNumber *)precomposedNum;
- (NSNumber *)fullScreenNum;

@end
