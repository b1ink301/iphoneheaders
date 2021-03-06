/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextLinkInteraction.h"

@interface UITextContentView : UIView <UITextInput, UITextLinkInteraction, UITextInputTraits>
/*
@property BOOL allowsEditingTextAttributes;
@property(copy) NSAttributedString * attributedText;
@property int autocapitalizationType;
@property(nonatomic) UITextAutocorrectionType autocorrectionType;
@property(nonatomic, readonly) UITextPosition * beginningOfDocument;
// @property id<UITextContentViewDelegate> * delegate;
@property(getter=isEditable) BOOL editable;
@property(getter=isEditing) BOOL editing;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic, readonly) UITextPosition * endOfDocument;
@property(retain) UIFont * font;
// @property id<UITextInputDelegate> * inputDelegate;
@property(nonatomic) UIKeyboardAppearance keyboardAppearance;
@property(nonatomic) UIKeyboardType keyboardType;
@property(nonatomic, readonly) UITextRange * markedTextRange;
@property(nonatomic, copy) NSDictionary * markedTextStyle;
@property(nonatomic) UIReturnKeyType returnKeyType;
@property BOOL scrollsSelectionOnWebDocumentChanges;
@property(nonatomic,getter=isSecureTextEntry) BOOL secureTextEntry;
@property NSRange selectedRange;
@property(copy) UITextRange * selectedTextRange;
@property(nonatomic) UITextStorageDirection selectionAffinity;
@property UIEdgeInsets selectionInset;
@property(nonatomic) UITextSpellCheckingType spellCheckingType;
@property(copy) NSString * text;
@property int textAlignment;
@property(retain) UIColor * textColor;
@property(nonatomic, readonly) UIView * textInputView;
// @property(readonly) id <UITextInputTokenizer> * tokenizer;
*/
- (void)_addShortcut:(id)arg1;
- (unsigned int)_allowedLinkTypes;
- (id)_automationValue;
- (void)_define:(id)arg1;
- (void)_didScroll;
- (void)_hideSelectionCommands;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (id)_keyboardResponder;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
- (void)_removeTextViewPropertiesFromText:(id)arg1;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillBeginDragging;
- (CGRect)_selectionClipRect;
- (void)_showTextStyleOptions:(id)arg1;
- (BOOL)allowsEditingTextAttributes;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (float)bottomBufferHeight;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelDataDetectorsWithWebLock;
- (void)cancelInteractionWithLink;
- (CGRect)caretRectForPosition:(id)arg1;
- (CGRect)caretRectForVisiblePosition:(id)arg1;
- (id)characterRangeAtPoint:(CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (void)clearScrollToVisibleTimer;
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1;
- (id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(CGPoint)arg1;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (CGPoint)constrainedPoint:(CGPoint)arg1;
- (id)contentAsAttributedString;
- (id)contentAsHTMLString;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (unsigned int)dataDetectorTypes;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (id)delegate;
- (void)deleteBackward;
- (void)didMoveToSuperview;
- (void)displayScrollerIndicators;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (void)ensureSelection;
- (CGRect)firstRectForRange:(id)arg1;
- (UIFont *)font;
- (id)fontForCaretSelection;
- (void)forwardInvocation:(id)arg1;
- (CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasMarkedText;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 webView:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isFirstResponder;
- (BOOL)isInteractingWithLink;
- (BOOL)isSMSTextView;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (int)marginTop;
- (UITextRange *)markedTextRange;
- (NSDictionary *)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)mightHaveLinks;
- (CGPoint)offset;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned int)offsetInMarkedTextForSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)performBecomeEditableTasks;
- (void)performScrollSelectionToVisible:(BOOL)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (void)recalculateStyle;
- (CGRect)rectForScrollToVisible;
- (CGRect)arg1;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeFromSuperview;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)resetDataDetectorsResultsWithWebLock;
- (BOOL)resignFirstResponder;
- (void)scrollRangeToVisible:(NSRange)arg1;
- (void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollToVisibleTimerAction;
- (id)scrollView;
- (BOOL)scrollingEnabled;
- (BOOL)scrollsSelectionOnWebDocumentChanges;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (NSRange)selectedRange;
- (id)selectedText;
- (UITextRange *)selectedTextRange;
- (int)selectionAffinity;
- (int)selectionGranularity;
- (UIEdgeInsets)selectionInset;
- (NSRange)selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (void)setAttributedText:(NSAttributedString *)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setBottomBufferHeight:(float)arg1;
- (void)setContentToAttributedString:(id)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setFont:(UIFont *)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarginTop:(int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
- (void)setMarkedTextStyle:(NSDictionary *)arg1;
- (void)setOffset:(CGPoint)arg1;
- (void)setScrollerIndicatorSubrect:(CGRect)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)arg1;
- (void)setSelectedRange:(NSRange)arg1;
- (void)setSelectedTextRange:(UITextRange *)arg1;
- (void)setSelectionAffinity:(int)arg1;
- (void)setSelectionChangeCallbacksDisabled:(BOOL)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (void)setSelectionInset:(UIEdgeInsets)arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setSelectionWithPoint:(CGPoint)arg1;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(UIColor *)arg1;
- (BOOL)shouldStartDataDetectors;
- (BOOL)showScrollerIndicators;
- (void)startAutoscroll:(CGPoint)arg1;
- (void)startDataDetectorsWithWebLock;
- (void)startInteractionWithLinkAtPoint:(CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1;
- (id)styleString;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)tapLinkAtPoint:(CGPoint)arg1;
- (NSString *)text;
- (int)textAlignment;
- (UIColor *)textColor;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (CGSize)tileSizeForSize:(CGSize)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)touchScrollToVisibleTimer;
- (void)touchScrollToVisibleTimerWithDelay:(double)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)unmarkText;
- (void)updateContentEditableAttribute:(BOOL)arg1;
- (void)updateInteractionWithLinkAtPoint:(CGPoint)arg1;
- (void)updateSelection;
- (void)updateWebViewObjects;
- (void)validateInteractionWithLinkAtPoint:(CGPoint)arg1;
- (CGRect)visibleRect;
- (CGRect)visibleTextRect;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)webView;
- (void)webViewDidChange:(id)arg1;
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1;

@end