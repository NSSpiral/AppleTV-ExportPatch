/* Runtime dump - NSTextList
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextList : NSObject <NSCoding, NSCopying>
{
    NSString * _markerFormat;
    unsigned int _listFlags;
    int _startIndex;
    void * _listSecondary;
}

+ (void)initialize;
+ (NSDictionary *)_standardMarkerAttributesForAttributes:(NSDictionary *)arg0;

- (char)_isOrdered;
- (void)dealloc;
- (NSTextList *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSTextList *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)options;
- (unsigned int)listOptions;
- (NSString *)markerFormat;
- (NSString *)_markerForMarkerFormat:(NSString *)arg0 itemNumber:(int)arg1 isNumbered:(char *)arg2 substitutionStart:(unsigned int *)arg3 end:(unsigned int *)arg4 specifierStart:(unsigned int *)arg5 end:(unsigned int *)arg6;
- (NSNumber *)_unaffixedMarkerForItemNumber:(int)arg0;
- (NSObject *)_markerAtIndex:(unsigned int)arg0 inText:(NSString *)arg1;
- (NSString *)_markerTitle;
- (NSString *)_markerPrefix;
- (id)_markerSpecifier;
- (NSString *)_unaffixedMarkerFormat;
- (NSString *)_unaffixedMarkerTitle;
- (NSString *)_markerSuffix;
- (NSTextList *)initWithMarkerFormat:(NSString *)arg0 options:(unsigned int)arg1;
- (void)setStartingItemNumber:(int)arg0;
- (int)startingItemNumber;
- (NSNumber *)markerForItemNumber:(int)arg0;

@end
