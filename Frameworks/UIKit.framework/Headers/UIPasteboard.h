/* Runtime dump - UIPasteboard
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPasteboard : NSObject
{
    NSString * _name;
}

@property (copy, nonatomic) NSString * string;
@property (copy, nonatomic) NSArray * strings;
@property (copy, nonatomic) NSURL * URL;
@property (copy, nonatomic) NSArray * URLs;
@property (copy, nonatomic) UIImage * image;
@property (copy, nonatomic) NSArray * images;
@property (copy, nonatomic) UIColor * color;
@property (copy, nonatomic) NSArray * colors;
@property (readonly, nonatomic) NSString * name;
@property (nonatomic) char persistent;
@property (readonly, nonatomic) int changeCount;
@property (readonly, nonatomic) int numberOfItems;
@property (copy, nonatomic) NSArray * items;

+ (UIPasteboard *)generalPasteboard;
+ (UIPasteboard *)_findPasteboard;
+ (UIPasteboard *)_printPasteboard;
+ (UIPasteboard *)pasteboardWithName:(NSString *)arg0 create:(char)arg1;
+ (UIPasteboard *)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(NSString *)arg0;

- (void)mf_addPasteboardRepresentationsForAttachments:(id)arg0;
- (NSArray *)mf_getAttachmentsPasteboardRepresentations;
- (void)mf_addPasteboardRepresentationsForTextAttachments:(id)arg0;
- (void)pl_setAssets:(NSArray *)arg0;
- (void)pl_setAsset:(NSSet *)arg0;
- (NSObject *)pl_assetsInPhotoLibrary:(NSObject *)arg0;
- (char)pl_containsAssets;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)setColors:(NSArray *)arg0;
- (UIPasteboard *)init;
- (NSString *)name;
- (NSString *)string;
- (NSArray *)images;
- (UIImage *)image;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (NSURL *)URL;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (int)changeCount;
- (void)setString:(NSString *)arg0;
- (int)numberOfItems;
- (NSObject *)valuesForPasteboardType:(NSObject *)arg0 inItemSet:(NSSet *)arg1;
- (NSObject *)valueForPasteboardType:(NSObject *)arg0;
- (NSObject *)dataForPasteboardType:(NSObject *)arg0 inItemSet:(NSSet *)arg1;
- (char)containsPasteboardTypes:(NSArray *)arg0 inItemSet:(NSSet *)arg1;
- (void)setURL:(NSString *)arg0;
- (void)setImages:(NSArray *)arg0;
- (NSString *)_initWithName:(NSString *)arg0 system:(char)arg1 create:(char)arg2;
- (void)setData:(NSData *)arg0 forPasteboardType:(NSObject *)arg1;
- (NSSet *)pasteboardTypesForItemSet:(NSSet *)arg0;
- (void)_pasteboardChanged:(NSNotification *)arg0;
- (void)_addItems:(NSArray *)arg0 oldPasteboardTypes:(NSArray *)arg1;
- (NSArray *)pasteboardTypes;
- (char)containsPasteboardTypes:(NSArray *)arg0;
- (NSObject *)dataForPasteboardType:(NSObject *)arg0;
- (void)setValue:(NSObject *)arg0 forPasteboardType:(NSObject *)arg1;
- (NSArray *)itemSetWithPasteboardTypes:(TSPPasteboard *)arg0;
- (void)addItems:(NSArray *)arg0;
- (char)isPersistent;
- (void)setPersistent:(char)arg0;
- (void)setStrings:(NSArray *)arg0;
- (NSArray *)strings;
- (void)setURLs:(id)arg0;
- (NSArray *)URLs;
- (NSArray *)colors;

@end
