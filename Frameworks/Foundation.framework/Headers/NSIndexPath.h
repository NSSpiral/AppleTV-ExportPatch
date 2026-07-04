/* Runtime dump - NSIndexPath
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int * _indexes;
    unsigned int _length;
    void * _reserved;
}

@property (readonly, nonatomic) int ab_group;
@property (readonly, nonatomic) int ab_item;
@property (readonly, nonatomic) int item;
@property (readonly, nonatomic) int section;
@property (readonly, nonatomic) int row;
@property (readonly) unsigned int length;

+ (NSIndexPath *)indexPathForItem:(int)arg0 inGroup:(int)arg1;
+ (NSIndexPath *)indexPathForItem:(int)arg0 inSection:(int)arg1;
+ (NSIndexPath *)indexPathForRow:(int)arg0 inSection:(int)arg1;
+ (NSIndexPath *)indexPath;
+ (char)supportsSecureCoding;
+ (NSIndexPath *)indexPathWithIndex:(unsigned int)arg0;
+ (NSIndexPath *)indexPathWithIndexes:(unsigned int *)arg0 length:(unsigned int)arg1;

- (int)ab_group;
- (int)ab_item;
- (int)item;
- (int)row;
- (int)section;
- (void)getIndexes:(unsigned int *)arg0 range:(struct _NSRange)arg1;
- (void)dealloc;
- (NSIndexPath *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSIndexPath *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (unsigned int)length;
- (NSIndexPath *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)indexAtPosition:(unsigned int)arg0;
- (NSObject *)indexPathByAddingIndex:(unsigned int)arg0;
- (NSObject *)indexPathByRemovingLastIndex;
- (NSIndexPath *)initWithIndexes:(unsigned int *)arg0 length:(unsigned int)arg1;
- (void)getIndexes:(unsigned int *)arg0;
- (NSIndexPath *)initWithIndex:(unsigned int)arg0;

@end
