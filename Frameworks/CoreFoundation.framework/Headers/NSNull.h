/* Runtime dump - NSNull
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSNull : NSObject <NSCopying, NSSecureCoding, CAAction, PQLBindable, PQLBindable, TSDPathPainter, TSDMixing>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSNull *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;
+ (NSNull *)null;

- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (void)tsch_saveToArchive:(struct ChartsNSNumberDoubleArchive *)arg0 archiver:(NSObject *)arg1;
- (void)tsch_saveToProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *)arg0;
- (void)sfu_appendJsonStringToString:(NSString *)arg0;
- (void)appendJsonStringToString:(NSString *)arg0;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (id)ml_stringValueForSQL;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt *)arg0 atPosition:(int)arg1;
- (NSObject *)CAMLType;
- (void)runActionForKey:(NSString *)arg0 object:(NSObject *)arg1 arguments:(NSDictionary *)arg2;
- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (NSNull *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (unsigned long)_cfTypeID;
- (NSNull *)retain;
- (void)release;
- (void)dealloc;
- (NSNull *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)retainCount;
- (NSString *)description;
- (NSNull *)copyWithZone:(struct _NSZone *)arg0;

@end
