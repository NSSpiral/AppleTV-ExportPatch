/* Runtime dump - NSLayoutConstraintParser
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutConstraintParser : NSObject
{
    NSString * _line;
    char * _lineChars;
    unsigned int _lineLength;
    unsigned int _opts;
    char _useHorizontalArrangement;
    NSDictionary * _metrics;
    NSDictionary * _views;
    <NSLayoutItem> * _containerView;
    NSMutableArray * _constraints;
    NSMutableArray * _unflushedWidthConstraints;
    NSMutableArray * _alignmentConstraints;
    unsigned int _currentCharacter;
    NSMutableArray * _incompleteConstraints;
    <NSLayoutItem> * _parsedLeftView;
    <NSLayoutItem> * _parsedRightView;
    <NSLayoutItem> * _parsedConstrainedWidthView;
}

+ (NSString *)constraintsWithVisualFormat:(NSString *)arg0 options:(unsigned int)arg1 metrics:(NSDictionary *)arg2 views:(NSDictionary *)arg3;

- (NSLayoutConstraintParser *)initWithFormat:(NSString *)arg0 options:(unsigned int)arg1 metrics:(NSDictionary *)arg2 views:(NSDictionary *)arg3;
- (id)descriptionLineWithCurrentCharacterPointer;
- (void)failWithDescription:(NSString *)arg0;
- (void)parseConnection;
- (NSObject *)parseView;
- (void)finishConstraint;
- (void)flushWidthConstraints;
- (struct _NSRange)rangeOfName;
- (NSString *)layoutItemForKey:(NSString *)arg0;
- (void)parsePredicateList;
- (void)parsePredicateWithParentheses;
- (void)parsePredicate;
- (void)parseOp;
- (float)parseConstant;
- (NSString *)metricForKey:(NSString *)arg0;
- (void)findContainerView;
- (void)dealloc;
- (NSString *)description;
- (NSMutableArray *)constraints;
- (void)parse;

@end
